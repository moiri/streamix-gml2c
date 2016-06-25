#ifndef CODEGEN_H
#define CODEGEN_H

void cgen_box_create( int, int, const char* );
void cgen_box_destroy( int, int );
void cgen_box_fct_call( int, const char* );
void cgen_box_fct_head( int, const char* );
void cgen_box_fct_proto( int, const char* );
void cgen_box_fct_ret( int );
void cgen_box_zlog_start( int, const char* );
void cgen_box_port( int, const char* );
void cgen_box_run( int, int, const char* );
void cgen_box_struct_head( int, const char* );
void cgen_box_struct_tail( int, const char* );
void cgen_box_wait_end( int, const char* );
void cgen_box_zlog_end( int, const char* );
void cgen_box_zlog_start( int, const char* );
void cgen_channel_create( int, int );
void cgen_channel_destroy( int, int );
void cgen_connect( int, int, int, const char*, const char* );
void cgen_endif( const char* );
void cgen_function_end( int );
void cgen_function_start( int );
void cgen_header_c_file( const char* );
void cgen_header_h_file( const char* );
void cgen_ident( int );
void cgen_ifndef( const char* );
void cgen_include( const char* );
void cgen_include_local( const char* );
void cgen_main_head();
int cgen_print( const char*, ... );
void cgen_program_init( int );
void cgen_program_cleanup( int );

#endif /* ifndef CODEGEN_H */
