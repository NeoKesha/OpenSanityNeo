using Newtonsoft.Json;
using System.Text;
using System.Threading;
using static System.Windows.Forms.AxHost;

namespace Psychetron
{
    public partial class Main : Form
    {
        private static Config config = new Config();
        private static string fileFuncAsm = "assembly\\func.asm";
        private static string fileProtoAsm = "assembly\\proto.asm";
        private static string fileDataAsm = "assembly\\data.asm";
        private static string fileConstAsm = "assembly\\const.asm";
        private static string fileDeclsAsm = "assembly\\decls.asm";
        private static string fileLibTwinDataC = "assembly\\libtwindata.c";

        private static string folderDatabaseCore = "core\\";
        private static string fileCoreMainAsm = "core\\main.asm";
        private static string[] linkingLibs = { "xapilib.lib", "xboxkrnl.lib",  "libc.lib", "libcp.lib", "xgraphics.lib", "d3d8.lib", "d3dx8.lib", "dsound.lib", "xmv.lib" };
        
        private static List<string> objList = new List<string>();
        
        public Main()
        {
            InitializeComponent();
            ReloadConfig();

        }
        private void btn_browseOutputPath_Click(object sender, EventArgs e)
        {
            BrowseAndUpdateDirectory(tb_outputPath, config.output_path);
        }
        private void btn_browseIntermediatePath_Click(object sender, EventArgs e)
        {
            BrowseAndUpdateDirectory(tb_intermediatePath, config.intermediate_path);
        }
        private void btn_browseGamePath_Click(object sender, EventArgs e)
        {
            BrowseAndUpdateDirectory(tb_gamePath, config.game_path);
        }
        private void btn_browseLink_Click(object sender, EventArgs e)
        {
            BrowseAndUpdateFile(tb_libPath, config.link_path, "LINK.EXE|LINK.EXE");
        }
        private void btn_browseSource_Click(object sender, EventArgs e)
        {
            BrowseAndUpdateDirectory(tb_sourcePath, config.source_path);
        }
        private void btn_browseDatabase_Click(object sender, EventArgs e)
        {
            BrowseAndUpdateDirectory(tb_databasePath, config.database_path);
        }
        private void btn_browseCl_Click(object sender, EventArgs e)
        {
            BrowseAndUpdateFile(tb_clPath, config.cl_path, "CL.EXE|CL.EXE");
        }
        private void btn_browseMl_Click(object sender, EventArgs e)
        {
            BrowseAndUpdateFile(tb_mlPath, config.ml_path, "ML.EXE|ML.EXE");
        }
        private void btn_browseInclude_Click(object sender, EventArgs e)
        {
            BrowseAndUpdateDirectory(tb_includePath, config.include_path);
        }
        private void btn_browseImagebld_Click(object sender, EventArgs e)
        {
            BrowseAndUpdateFile(tb_imagebldPath, config.imagebld_path, "IMAGEBLD.EXE|IMAGEBLD.EXE");
        }
        private void btn_browse_Click(object sender, EventArgs e)
        {
            BrowseAndUpdateDirectory(tb_libPath, config.lib_path);
        }
        private void btn_saveConfig_Click(object sender, EventArgs e)
        {
            SaveConfig();
        }
        private void btn_reloadConfig_Click(object sender, EventArgs e)
        {
            ReloadConfig();
        }
        private void btn_validateConfig_Click(object sender, EventArgs e)
        {
            ValidateConfig();
        }
        private void btn_build_Click(object sender, EventArgs e)
        {
            if (ValidateConfig())
            {
                Build();
            }
        }
        
        private void BrowseAndUpdateFile(TextBox target, string path, string name)
        {
            OpenFileDialog dialog = new OpenFileDialog();
            dialog.Filter = name;
            var fname = Path.GetFileName(path);
            var initialPath = path.Substring(0, path.Length - fname.Length);
            initialPath = Path.GetFullPath(initialPath);
            dialog.InitialDirectory = initialPath;
            if (dialog.ShowDialog() == DialogResult.OK)
            {
                var selectedPath = dialog.FileName;
                var workingDir = Directory.GetCurrentDirectory();
                var relPath = Path.GetRelativePath(workingDir, selectedPath);
                target.Text = relPath;
                UpdateConfig();
            }
        }
        private void BrowseAndUpdateDirectory(TextBox target, string path)
        {
            FolderBrowserDialog dialog = new FolderBrowserDialog();
            if (path != "") dialog.InitialDirectory = Path.GetFullPath(path);
            if (dialog.ShowDialog() == DialogResult.OK)
            {
                var selectedPath = dialog.SelectedPath;
                var workingDir = Directory.GetCurrentDirectory();
                var relPath = Path.GetRelativePath(workingDir, selectedPath);
                target.Text = relPath;
                UpdateConfig();
            }
        }
        private void ReloadConfig()
        {
            using (var configFile = new FileStream(".\\config.json", FileMode.Open, FileAccess.Read))
            {
                StreamReader reader = new StreamReader(configFile);
                config = JsonConvert.DeserializeObject<Config>(reader.ReadToEnd());
            }
            UpdateUI();
        }
        private void SaveConfig()
        {
            UpdateConfig();
            using (var configFile = new FileStream(".\\config.json", FileMode.Create, FileAccess.Write))
            {
                StreamWriter writer = new StreamWriter(configFile);
                writer.Write(JsonConvert.SerializeObject(config, Formatting.Indented));
                writer.Flush();
            }
        }
        private void UpdateUI()
        {
            tb_clPath.Text = config.cl_path;
            tb_mlPath.Text = config.ml_path;
            tb_linkPath.Text = config.link_path;
            tb_imagebldPath.Text = config.imagebld_path;
            tb_includePath.Text = config.include_path;
            tb_libPath.Text = config.lib_path;

            tb_databasePath.Text = config.database_path;
            tb_sourcePath.Text = config.source_path;

            tb_outputPath.Text = config.output_path;
            tb_intermediatePath.Text = config.intermediate_path;
            tb_gamePath.Text = config.game_path;

            cb_fastbuild.Checked = config.fastbuild;
            cb_copyXbe.Checked = config.copy_on_complete;
            cb_stopOnError.Checked = config.stop_on_error;

            tb_clFlags.Text = config.cl_flags;
            tb_mlFlags.Text = config.ml_flags;
            tb_linkFlags.Text = config.link_flags;
            tb_imagebldFlags.Text = config.imagebld_flags;
        }
        private void ClearLog()
        {
            tb_log.Clear();
        }
        private void UpdateConfig()
        {
            config.cl_path = tb_clPath.Text;
            config.ml_path = tb_mlPath.Text;
            config.link_path = tb_linkPath.Text;
            config.imagebld_path = tb_imagebldPath.Text;
            config.include_path = tb_includePath.Text;
            config.lib_path = tb_libPath.Text;

            config.database_path = tb_databasePath.Text;
            config.source_path = tb_sourcePath.Text;

            config.output_path = tb_outputPath.Text;
            config.intermediate_path = tb_intermediatePath.Text;
            config.game_path = tb_gamePath.Text;

            config.fastbuild = cb_fastbuild.Checked;
            config.copy_on_complete = cb_copyXbe.Checked;
            config.stop_on_error = cb_stopOnError.Checked;

            config.cl_flags = tb_clFlags.Text;
            config.ml_flags = tb_mlFlags.Text;
            config.link_flags = tb_linkFlags.Text;
            config.imagebld_flags = tb_imagebldFlags.Text;
        }
        private bool ValidateConfig()
        {
            var valid = true;
            SaveConfig();
            ClearLog();
            if (!File.Exists(config.cl_path))
            {
                tb_log.AppendText("CL.EXE is not found!\r\n");
                valid = false;
            }
            if (!File.Exists(config.ml_path))
            {
                tb_log.AppendText("ML.EXE is not found!\r\n");
                valid = false;
            }
            if (!File.Exists(config.link_path))
            {
                tb_log.AppendText("LINK.EXE is not found!\r\n");
                valid = false;
            }
            if (!File.Exists(config.imagebld_path))
            {
                tb_log.AppendText("IMAGEBLD.EXE is not found!\r\n");
                valid = false;
            }

            if (!File.Exists(Path.Join(config.database_path, fileFuncAsm)))
            {
                tb_log.AppendText(fileFuncAsm + " at database is not found!\r\n");
                valid = false;
            }

            if (!File.Exists(Path.Join(config.database_path, fileProtoAsm)))
            {
                tb_log.AppendText(fileProtoAsm + " at database is not found!\r\n");
                valid = false;
            }

            if (!File.Exists(Path.Join(config.database_path, fileDataAsm)))
            {
                tb_log.AppendText(fileDataAsm + " at database is not found!\r\n");
                valid = false;
            }

            if (!File.Exists(Path.Join(config.database_path, fileConstAsm)))
            {
                tb_log.AppendText(fileConstAsm + " at database is not found!\r\n");
                valid = false;
            }

            if (!File.Exists(Path.Join(config.database_path, fileDeclsAsm)))
            {
                tb_log.AppendText(fileDeclsAsm + " at database is not found!\r\n");
                valid = false;
            }

            if (!File.Exists(Path.Join(config.database_path, fileLibTwinDataC)))
            {
                tb_log.AppendText(fileLibTwinDataC + " at database is not found!\r\n");
                valid = false;
            }

            if (valid)
            {
                tb_log.AppendText("Config is OK!\r\n");
            }
            else
            {
                tb_log.AppendText("Config is NOT OK!\r\n");
            }
            return valid;
        }

        private void Build()
        {
            if (!Directory.Exists(config.output_path)) Directory.CreateDirectory(config.output_path);
            if (!Directory.Exists(config.intermediate_path)) Directory.CreateDirectory(config.intermediate_path);

            if (ShoudRebuildTwinCore())
            {
                tb_log.AppendText("Building Twin Core MASM project\r\n");
                if (!BuildAssemblyProject() && config.stop_on_error)
                {
                    tb_log.AppendText("Failed to build Twin Core. Halting the build.\r\n");
                    return;
                }
                tb_log.AppendText("Preprocessing func.asm\r\n");
                if (!PreprocessFuncAsm() && config.stop_on_error)
                {
                    tb_log.AppendText("Failed to build Twin Core. Halting the build.\r\n");
                    return;
                }
                tb_log.AppendText("Assembling Twin Core\r\n");
                if (!AssembleTwinCore() && config.stop_on_error)
                {
                    tb_log.AppendText("Failed to build Twin Core. Halting the build.\r\n");
                    return;
                }
            } else
            {
                tb_log.AppendText("Twin Core is up to date\r\n");
            }

            var cppFiles = Directory.GetFiles(Path.Join(config.source_path, "cpp"), "*.cpp", SearchOption.AllDirectories);
            foreach (var cppFile in cppFiles)
            {
                var fname = Path.GetFileNameWithoutExtension(cppFile);
                if (!ShouldRebuildCppFile(cppFile)) {
                    tb_log.AppendText(fname+".obj is up to date\r\n");
                    continue;
                }
                tb_log.AppendText("Compiling "+fname + ".cpp\r\n");
                if (!CompileCppModule(cppFile) && config.stop_on_error)
                {
                    tb_log.AppendText($"Failed to compile {fname}.cpp. Halting the build.\r\n");
                    return;
                }
            }

            tb_log.AppendText("Linking EXE\r\n");
            if (!BuildExe() && config.stop_on_error)
            {
                tb_log.AppendText("Failed to build an EXE. Halting the build.\r\n");
                return;
            }
            tb_log.AppendText("Making XBE\r\n");
            if(!BuildXbe() && config.stop_on_error)
            {
                tb_log.AppendText("Failed to build an XBE. Halting the build.\r\n");
                return;
            }
            if (config.copy_on_complete)
            {
                tb_log.AppendText("Copying XBE to game's location\r\n");
                CopyXbe();
            }
            tb_log.AppendText("Done!\r\n");
        }
        private bool StartProcess(string cmd, string arguments, out string message)
        {
            System.Diagnostics.Process process = new System.Diagnostics.Process();
            System.Diagnostics.ProcessStartInfo startInfo = new System.Diagnostics.ProcessStartInfo();
            startInfo.WindowStyle = System.Diagnostics.ProcessWindowStyle.Hidden;
            startInfo.FileName = cmd;
            startInfo.RedirectStandardOutput = true;
            startInfo.RedirectStandardError = true;
            startInfo.Arguments = arguments;
            process.StartInfo = startInfo;

            StringBuilder output = new StringBuilder();

            using (AutoResetEvent outputWaitHandle = new AutoResetEvent(false))
            {
                process.OutputDataReceived += (sender, e) => {
                    if (e.Data == null)
                    {
                        outputWaitHandle.Set();
                    }
                    else
                    {
                        output.AppendLine(e.Data);
                    }
                };

                if (process.Start())
                {
                    process.BeginOutputReadLine();
                    process.BeginErrorReadLine();

                    process.WaitForExit();
                    if (process.ExitCode != 0)
                    {
                        message = output.ToString();
                        return false;
                    }
                    else
                    {
                        message = "";
                        return true;
                    }
                } 
            }

            /*
            if (process.Start())
            {
                process.WaitForExit();
                if (process.ExitCode != 0)
                {
                    message = process.StandardOutput.ReadToEnd();
                    return false;
                }

                message = "";
                return true;
            }
            */

            message = "Couldn't start " + Path.GetFileName(cmd);
            return false;
        }
        private bool BuildAssemblyProject()
        {
            if (Directory.Exists(Path.Join(config.source_path, "assembly")))
            {
                Directory.Delete(Path.Join(config.source_path, "assembly"), true);
            }
            Directory.CreateDirectory(Path.Join(config.source_path, "assembly"));
            File.Copy(Path.Join(config.database_path, fileDataAsm), Path.Join(config.source_path, fileDataAsm));
            File.Copy(Path.Join(config.database_path, fileProtoAsm), Path.Join(config.source_path, fileProtoAsm));
            File.Copy(Path.Join(config.database_path, fileDeclsAsm), Path.Join(config.source_path, fileDeclsAsm));
            File.Copy(Path.Join(config.database_path, fileLibTwinDataC), Path.Join(config.source_path, fileLibTwinDataC));

            var coreFiles = Directory.GetFiles(Path.Join(config.database_path, folderDatabaseCore), "*.*", SearchOption.AllDirectories);
            foreach (var coreFile in coreFiles)
            {
                var relPath = Path.GetRelativePath(Path.Join(config.database_path, folderDatabaseCore), coreFile);
                var dstPath = Path.Join(config.source_path, "assembly", relPath);
                var dirName = Path.GetDirectoryName(dstPath);
                if (!Directory.Exists(dirName))
                {
                    Directory.CreateDirectory(dirName);
                }
                File.Copy(coreFile, dstPath);
            }

            return true;
        }
        private bool PreprocessFuncAsm()
        {
            var totalLines = 0;
            var processedLines = 0;
            HashSet<string> globals = new HashSet<string>();
            List<KeyValuePair<string, string>> vtables = new List<KeyValuePair<string, string>>();
            Dictionary<string, string> dataAliases = new Dictionary<string, string>();
            Dictionary<String, String> cppList = new Dictionary<String, String>();
            var cppLists = Directory.GetFiles(Path.Join(config.database_path, "cppLists"), "*.txt", SearchOption.AllDirectories);
            foreach (var cppListPath in cppLists)
            {
                if (File.Exists(cppListPath))
                {
                    using (var srcFile = new FileStream(cppListPath, FileMode.Open, FileAccess.Read))
                    {
                        var reader = new StreamReader(srcFile);
                        while (!reader.EndOfStream)
                        {
                            var line = reader.ReadLine();
                            if (line.StartsWith("#")) continue;
                            var tokens = line.Split(" ");
                            cppList.Add("FUN_" + tokens[0].ToUpper(), tokens[1]);
                        }
                    }
                }
            }

            if (File.Exists(Path.Join(config.database_path, "aliases\\dataNames.txt")))
            {
                using (var srcFile = new FileStream(Path.Join(config.database_path, "aliases\\dataNames.txt"), FileMode.Open, FileAccess.Read))
                {
                    var reader = new StreamReader(srcFile);
                    while (!reader.EndOfStream)
                    {
                        var tokens = reader.ReadLine().Trim().Split(" ");
                        dataAliases.Add(tokens[0], tokens[1]);
                        if (tokens[1].Contains("_VT"))
                        {
                            vtables.Add(new KeyValuePair<string, string>(tokens[1], tokens[0]));
                        }
                    }
                }
            }
            if (File.Exists(Path.Join(config.database_path, "aliases\\globals.txt")))
            {
                using (var srcFile = new FileStream(Path.Join(config.database_path, "aliases\\globals.txt"), FileMode.Open, FileAccess.Read))
                {
                    var reader = new StreamReader(srcFile);
                    while (!reader.EndOfStream)
                    {
                        globals.Add(reader.ReadLine().Trim()); 
                    }
                }
            }

            using (var dataFile = new FileStream(Path.Join(config.source_path, fileDataAsm), FileMode.Append, FileAccess.Write))
            {
                var writer = new StreamWriter(dataFile);
                foreach (var global in globals)
                {
                    
                    if (dataAliases.ContainsKey(global))
                    {//RenderTarget EQU PTR_0x003ec568
                        writer.WriteLine($"{dataAliases[global]} EQU {global}");
                        writer.WriteLine("PUBLIC " + dataAliases[global]);
                    } else
                    {
                        writer.WriteLine("PUBLIC " + global);
                    }
                    
                }
                writer.Flush();
            }

            using (var srcFile = new FileStream(Path.Join(config.database_path, fileFuncAsm), FileMode.Open, FileAccess.Read))
            using (var dstFile = new FileStream(Path.Join(config.source_path, fileFuncAsm), FileMode.Create, FileAccess.Write))
            using (var protoFile = new FileStream(Path.Join(config.source_path, fileProtoAsm), FileMode.Append, FileAccess.Write))
            {
                var reader = new StreamReader(srcFile);
                var writer = new StreamWriter(dstFile);
                var protoWriter = new StreamWriter(protoFile);
                PreprocessorState state = PreprocessorState.OUTSIDE;
                while (!reader.EndOfStream)
                {
                    var srcLine = reader.ReadLine();
                    string dstLine = null;
                    switch (state)
                    {
                        case PreprocessorState.OUTSIDE:
                            dstLine = srcLine;
                            if ((srcLine.StartsWith("TwinProc") || srcLine.StartsWith("TwinMain")) && !srcLine.StartsWith("TwinProcEnd"))
                            {
                                var tokens = srcLine.Split(" ");
                                var funcName = tokens[1].Replace(",", "");
                                if (cppList.ContainsKey(funcName))
                                {
                                    var conv = tokens[2].ToUpper();
                                    var externName = cppList[funcName];
                                    if (externName.StartsWith("?")) conv = "SYSCALL";
                                    protoWriter.WriteLine("EXTERN " + conv + " " + externName + ": PROC");
                                    dstLine = null;
                                    state = PreprocessorState.INSIDE_SKIP;
                                }
                                else
                                {
                                    state = PreprocessorState.INSIDE_COPY;
                                }
                            }
                            break;
                        case PreprocessorState.INSIDE_COPY:
                            {
                                var tokens = srcLine.Split(" ");
                                dstLine = "";
                                foreach (var token in tokens)
                                {
                                    var newToken = token;
                                    if (cppList.ContainsKey(newToken))
                                    {
                                        newToken = cppList[newToken];
                                    }
                                    dstLine += newToken + " ";
                                }

                                if (srcLine.StartsWith("TwinProcEnd"))
                                {
                                    state = PreprocessorState.OUTSIDE;
                                }
                            }
                            break;
                        case PreprocessorState.INSIDE_SKIP:
                            dstLine = null;

                            if (srcLine.StartsWith("TwinProcEnd"))
                            {
                                state = PreprocessorState.OUTSIDE;
                            }
                            break;
                    }

                    totalLines++;
                    if (dstLine != null)
                    {
                        processedLines++;
                        writer.WriteLine(dstLine);
                    }
                }
                writer.Flush();
                protoWriter.Flush();
            }

            using (var srcFile = new FileStream(Path.Join(config.database_path, fileConstAsm), FileMode.Open, FileAccess.Read))
            using (var dstFile = new FileStream(Path.Join(config.source_path, fileConstAsm), FileMode.Create, FileAccess.Write))
            {
                var reader = new StreamReader(srcFile);
                var writer = new StreamWriter(dstFile);
                while (!reader.EndOfStream)
                {
                    var srcLine = reader.ReadLine();
                    var dstLine = "";
                    var tokens = srcLine.Split(" ");
                    foreach (var token in tokens)
                    {
                        var newToken = token;
                        if (cppList.ContainsKey(newToken))
                        {
                            newToken = cppList[newToken];
                        }
                        dstLine += newToken + " ";
                    }
                    writer.WriteLine(dstLine);
                }
                foreach (var record in vtables)
                {
                    writer.WriteLine($"STR_{record.Key} BYTE \"{record.Key}\", 0");
                }
                writer.WriteLine($"REFLECTION_DATA DWORD {vtables.Count}");
                foreach (var record in vtables)
                {
                    writer.WriteLine($"DWORD {record.Value}");
                    writer.WriteLine($"DWORD STR_{record.Key}");
                }
                writer.WriteLine($"PUBLIC REFLECTION_DATA");
                writer.Flush();
            }

            tb_log.AppendText($"{100.0f - processedLines*100.0f/totalLines:0.00}% of code ported to C++\r\n");
            return true;
        }

        private enum PreprocessorState
        {
            OUTSIDE,
            INSIDE_COPY,
            INSIDE_SKIP
        }

        private bool AssembleTwinCore()
        {
            string message = null;
            var args = config.ml_flags;
            var result = true;
            args += " /Fo" + "\"" + Path.Join(config.intermediate_path, "main.obj") + "\" "+Path.Join(config.source_path, "assembly\\main.asm");
            if (!StartProcess(config.ml_path, args, out message))
            {
                tb_log.AppendText(message + "\r\n");
                result = false;
            } else
            {
                tb_log.AppendText("Twin Core assembled successfully!\r\n");
            }

            args = Path.Join(config.source_path, fileLibTwinDataC) + " /I" + config.include_path;
            args += " /Fo" + "\"" + Path.Join(config.intermediate_path, "mainstring.obj") + "\" ";
            args += " " + config.cl_flags;
            if (!StartProcess(config.cl_path, args, out message))
            {
                tb_log.AppendText(message + "\r\n");
                result = false;
            }
            else
            {
                tb_log.AppendText("Twin Core Strings compiled successfully!\r\n");
            }

            return result;
        }
        private bool CompileCppModule(string path)
        {
            string message = null;
            var name = Path.GetFileNameWithoutExtension(path);
            var args = path + " /I" + config.include_path + " /I" + Path.Join(config.source_path, "cpp");
            args += " /Fo" + "\"" + Path.Join(config.intermediate_path, name + ".obj") + "\" ";
            args += " " + config.cl_flags;
            if (!StartProcess(config.cl_path, args, out message))
            {
                tb_log.AppendText(message + "\r\n");
                return false;
            } else
            {
                return true;
            }
        }
        private bool BuildExe()
        {
            objList.Clear();
            var files = Directory.GetFiles(config.intermediate_path, "*.obj", SearchOption.AllDirectories);
            foreach (var file in files)
            {
                objList.Add(Path.GetFileName(file));
            }
            string message = null;
            var args = config.link_flags;
            args += " /LIBPATH:" + config.lib_path+ "";
            foreach (var lib in linkingLibs)
            {
                args += " \"" + lib + "\"";
            }
            args += " /OUT:\"" + Path.Join(config.intermediate_path, "default.exe").Replace("\\", "\\\\")+ "\"";
            foreach(var obj in objList)
            {
                args += " \"" + Path.Join(config.intermediate_path, obj).Replace("\\","\\\\") + "\"";
            }
            if (!StartProcess(config.link_path, args, out message))
            {
                tb_log.AppendText(message + "\r\n");
                return false;
            }
            else
            {
                tb_log.AppendText("Twinsanity EXE linked successfully!\r\n");
                return true;
            }
        }
        private bool BuildXbe()
        {
            string message = null;
            var args = config.imagebld_flags;
            args += " /IN:" + Path.Join(config.intermediate_path, "default.exe");
            args += " /OUT:" + Path.Join(config.output_path, "default.xbe");
            if (!StartProcess(config.imagebld_path, args, out message))
            {
                tb_log.AppendText(message + "\r\n");
                return false;
            }
            else
            {
                tb_log.AppendText("Twinsanity XBE builded successfully!\r\n");
                return true;
            }
        }
        private bool CopyXbe()
        {
            if (File.Exists(Path.Join(config.game_path, "default.xbe")))
            {
                File.Delete(Path.Join(config.game_path, "default.xbe"));
            }
            if (File.Exists(Path.Join(config.output_path, "default.xbe")))
            {
                File.Copy(Path.Join(config.output_path, "default.xbe"), Path.Join(config.game_path, "default.xbe"));
            } else
            {
                return false;
            }

            return true;
        }
        private bool ShoudRebuildTwinCore()
        {
            if (!config.fastbuild) return true;

            if (!File.Exists(Path.Join(config.intermediate_path, "main.obj"))) return true;
            if (!File.Exists(Path.Join(config.database_path, fileLibTwinDataC))) return true;

            FileInfo funcAsmInfo = new FileInfo(Path.Join(config.database_path, fileFuncAsm));
            FileInfo mainObjInfo = new FileInfo(Path.Join(config.intermediate_path, "main.obj"));
            if (funcAsmInfo.LastWriteTime > mainObjInfo.LastWriteTime) return true;

            FileInfo libTwinDataCInfo = new FileInfo(Path.Join(config.database_path, fileLibTwinDataC));
            FileInfo mainStringsObjInfo = new FileInfo(Path.Join(config.intermediate_path, "main.obj"));
            if (libTwinDataCInfo.LastWriteTime > mainStringsObjInfo.LastWriteTime) return true;

            var cppLists = Directory.GetFiles(Path.Join(config.database_path, "cppLists"), "*.txt", SearchOption.AllDirectories);
            foreach (var cppListPath in cppLists)
            {
                FileInfo cppListInfo = new FileInfo(cppListPath);
                if (cppListInfo.LastWriteTime > mainObjInfo.LastWriteTime) return true;
            }


            return false;
        }
        private bool ShouldRebuildCppFile(string path)
        {
            if (!config.fastbuild) return true;

            var name = Path.GetFileNameWithoutExtension(path);
            if (!File.Exists(Path.Join(config.intermediate_path, name+".obj"))) return true;

            FileInfo cppInfo = new FileInfo(path);
            FileInfo hInfo = new FileInfo(path.Replace(".cpp", ".h"));
            FileInfo objInfo = new FileInfo(Path.Join(config.intermediate_path, name+".obj"));
            if (cppInfo.LastWriteTime > objInfo.LastWriteTime) return true;
            if (hInfo.LastWriteTime > objInfo.LastWriteTime) return true;

            return false;
        }
    }

    class Config
    {
        public string cl_path { get; set; }
        public string ml_path { get; set; }
        public string link_path { get; set; }
        public string imagebld_path { get; set; }
        public string include_path { get; set; }
        public string lib_path { get; set; }
        public string database_path { get; set; }
        public string source_path { get; set; }
        public string intermediate_path { get; set; }
        public string output_path { get; set; }
        public string game_path { get; set; }
        public bool copy_on_complete { get; set; }
        public bool stop_on_error { get; set; }
        public bool fastbuild { get; set; }
        public string cl_flags { get; set; }
        public string ml_flags { get; set; }
        public string link_flags { get; set; }
        public string imagebld_flags { get; set; }
    }
}
