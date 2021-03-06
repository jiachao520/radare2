// mark with HANDLER_RULE_OP every rule that is a _command
// mark with RULE_OP every rule that you use with DEFINE_IS_TS_FCN or with its TSSymbol (e.g. ts_##name##_symbol)
HANDLER_RULE_OP (number_command)
HANDLER_RULE_OP (commands)
HANDLER_RULE_OP (arged_command)
HANDLER_RULE_OP (task_command)
HANDLER_RULE_OP (legacy_quoted_command)
HANDLER_RULE_OP (repeat_command)
HANDLER_RULE_OP (redirect_command)
HANDLER_RULE_OP (help_command)
HANDLER_RULE_OP (tmp_seek_command)
HANDLER_RULE_OP (tmp_blksz_command)
HANDLER_RULE_OP (tmp_fromto_command)
HANDLER_RULE_OP (tmp_arch_command)
HANDLER_RULE_OP (tmp_bits_command)
HANDLER_RULE_OP (tmp_nthi_command)
HANDLER_RULE_OP (tmp_eval_command)
HANDLER_RULE_OP (tmp_fs_command)
HANDLER_RULE_OP (tmp_reli_command)
HANDLER_RULE_OP (tmp_kuery_command)
HANDLER_RULE_OP (tmp_fd_command)
HANDLER_RULE_OP (tmp_reg_command)
HANDLER_RULE_OP (tmp_file_command)
HANDLER_RULE_OP (tmp_string_command)
HANDLER_RULE_OP (tmp_hex_command)
HANDLER_RULE_OP (last_command)
HANDLER_RULE_OP (grep_command)
HANDLER_RULE_OP (iter_flags_command)
HANDLER_RULE_OP (iter_dbta_command)
HANDLER_RULE_OP (iter_dbtb_command)
HANDLER_RULE_OP (iter_dbts_command)
HANDLER_RULE_OP (iter_file_lines_command)
HANDLER_RULE_OP (iter_offsets_command)
HANDLER_RULE_OP (iter_sdbquery_command)
HANDLER_RULE_OP (iter_threads_command)
HANDLER_RULE_OP (iter_bbs_command)
HANDLER_RULE_OP (iter_instrs_command)
HANDLER_RULE_OP (iter_functions_command)
HANDLER_RULE_OP (iter_step_command)
HANDLER_RULE_OP (iter_interpret_command)
HANDLER_RULE_OP (iter_hit_command)
HANDLER_RULE_OP (foreach_addrsize_command)
HANDLER_RULE_OP (foreach_bb_command)
HANDLER_RULE_OP (foreach_cmd_command)
HANDLER_RULE_OP (foreach_comment_command)
HANDLER_RULE_OP (foreach_import_command)
HANDLER_RULE_OP (foreach_register_command)
HANDLER_RULE_OP (foreach_symbol_command)
HANDLER_RULE_OP (foreach_string_command)
HANDLER_RULE_OP (foreach_section_command)
HANDLER_RULE_OP (foreach_iomap_command)
HANDLER_RULE_OP (foreach_dbgmap_command)
HANDLER_RULE_OP (foreach_flag_command)
HANDLER_RULE_OP (foreach_function_command)
HANDLER_RULE_OP (foreach_thread_command)
HANDLER_RULE_OP (html_disable_command)
HANDLER_RULE_OP (html_enable_command)
HANDLER_RULE_OP (pipe_command)
HANDLER_RULE_OP (scr_tts_command)
RULE_OP (fdn_redirect_operator)
RULE_OP (fdn_append_operator)
RULE_OP (html_redirect_operator)
RULE_OP (html_append_operator)
RULE_OP (cmd_substitution_arg)
RULE_OP (args)
RULE_OP (arg)
RULE_OP (arg_identifier)
RULE_OP (pf_arg)
RULE_OP (pf_args)
RULE_OP (pf_new_args)
RULE_OP (pf_dot_cmd_args)
RULE_OP (pf_concatenation)
RULE_OP (double_quoted_arg)
RULE_OP (single_quoted_arg)
RULE_OP (concatenation)
RULE_OP (grep_specifier)
#undef RULE_OP
#undef HANDLER_RULE_OP
