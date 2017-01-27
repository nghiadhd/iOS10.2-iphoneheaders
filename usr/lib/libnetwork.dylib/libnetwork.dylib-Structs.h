/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct nw_protocol_identifier {
	char name[32];
	int level;
	int mapping;
} nw_protocol_identifier;

typedef struct nw_protocol_callbacks {
	/*function pointer*/void* add_input_handler;
	/*function pointer*/void* remove_input_handler;
	/*function pointer*/void* replace_input_handler;
	/*function pointer*/void* connect;
	/*function pointer*/void* disconnect;
	/*function pointer*/void* connected;
	/*function pointer*/void* disconnected;
	/*function pointer*/void* error;
	/*function pointer*/void* input_available;
	/*function pointer*/void* output_available;
	/*function pointer*/void* get_input_frames;
	/*function pointer*/void* get_output_frames;
	/*function pointer*/void* finalize_output_frames;
	/*function pointer*/void* get_parameters;
	/*function pointer*/void* get_path;
	/*function pointer*/void* get_local_endpoint;
	/*function pointer*/void* get_remote_endpoint;
	/*function pointer*/void* updated_path;
	/*function pointer*/void* supports_external_data;
	/*function pointer*/void* input_finished;
} nw_protocol_callbacks;

typedef struct nw_protocol {
	nw_protocol_identifier identifier;
	nw_protocol_callbacks callbacks;
	nw_protocol output_handler;
	void handle;
	unsigned char flow_id[16];
	nw_protocol default_input_handler;
	void output_handler_context;
} nw_protocol;

typedef struct __CFError* CFErrorRef;

typedef struct _DNSServiceRef_t* DNSServiceRef_tRef;

typedef struct __CFURL* CFURLRef;

typedef struct __CFString* CFStringRef;

typedef struct nw_connection_throughput_monitor_s {
	void timer;
	unsigned minimum;
	unsigned long long current_bytes;
	unsigned long long current_time;
	unsigned long long last_bytes;
	unsigned long long last_time;
} nw_connection_throughput_monitor_s;

typedef struct __CFArray* CFArrayRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

