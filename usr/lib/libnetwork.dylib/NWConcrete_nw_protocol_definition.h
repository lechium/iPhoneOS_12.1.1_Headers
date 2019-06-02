/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_protocol_definition.h>

@class NSString;

@interface NWConcrete_nw_protocol_definition : NSObject <OS_nw_protocol_definition> {

	nw_protocol_identifier identifier;
	unsigned char unique_identifier[16];
	int variant;
	/*function pointer*/void* allocate_globals;
	/*function pointer*/void* deallocate_globals;
	/*function pointer*/void* allocate_instance_state;
	/*function pointer*/void* deallocate_instance_state;
	/*function pointer*/void* allocate_flow_state;
	/*function pointer*/void* deallocate_flow_state;
	/*function pointer*/void* allocate_options;
	/*function pointer*/void* copy_options;
	/*function pointer*/void* deallocate_options;
	/*function pointer*/void* check_equality_options;
	/*function pointer*/void* allocate_metadata;
	/*function pointer*/void* deallocate_metadata;
	/*function pointer*/void* deallocate_cache_entry;
	/*function pointer*/void* should_flush_cache;
	/*function pointer*/void* initialize;
	/*function pointer*/void* destroy;
	/*function pointer*/void* handle_inbound;
	/*function pointer*/void* handle_outbound;
	/*function pointer*/void* handle_error;
	/*function pointer*/void* inbound_starting;
	/*function pointer*/void* inbound_stopping;
	/*function pointer*/void* outbound_starting;
	/*function pointer*/void* outbound_stopping;
	/*function pointer*/void* start;
	/*function pointer*/void* stop;
	/*function pointer*/void* copy_metadata;
	unsigned custom_flow_map_key_size;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
@end
