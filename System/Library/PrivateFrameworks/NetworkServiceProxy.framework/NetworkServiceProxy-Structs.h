/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct nw_protocol {
	unsigned char flow_id[16];
	nw_protocol_identifier identifier;
	nw_protocol_callbacks callbacks;
	nw_protocol output_handler;
	void handle;
	nw_protocol default_input_handler;
	void output_handler_context;
} nw_protocol;

typedef struct nw_frame_array_s {
	nw_frame tqh_first;
	nw_frame tqh_last;
} nw_frame_array_s;

typedef struct _NSZone* NSZoneRef;

