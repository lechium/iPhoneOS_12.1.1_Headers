/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/log/liblog_geo.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface GEOLogFormatter : NSObject {

	NSObject*<OS_dispatch_queue> _isolation;
	NSMutableDictionary* _requestResponseCollector;

}

@property (nonatomic,readonly) NSMutableDictionary * requestResponseCollector;              //@synthesize requestResponseCollector=_requestResponseCollector - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> isolation;                      //@synthesize isolation=_isolation - In the implementation block
+(id)sharedFormatter;
-(id)descriptionForPropertyListData:(id)arg1 capturedStateType:(id)arg2 ;
-(id)formattedStringForStructType:(id)arg1 data:(id)arg2 ;
-(id)formattedStringForStructType:(id)arg1 value:(id)arg2 ;
-(id)descriptionForCapturedState:(id)arg1 ;
-(id)formattedStringForEnumType:(id)arg1 value:(id)arg2 ;
-(id)formattedStringForProtobufType:(id)arg1 value:(id)arg2 ;
-(id)formattedStringForRequestResponseType:(id)arg1 value:(id)arg2 ;
-(id)formattedAttributedStringForType:(id)arg1 value:(id)arg2 ;
-(id)formattedStringForStateType:(id)arg1 data:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)isolation;
-(NSMutableDictionary *)requestResponseCollector;
-(id)formattedStringForProtobufType:(id)arg1 data:(id)arg2 ;
-(id)formattedStringForPBCodableData:(id)arg1 ;
-(id)formattedStringForRequestResponse:(id)arg1 ;
-(id)formattedStringForSinglePartRequestResponse:(id)arg1 compressed:(unsigned char)arg2 ;
-(id)formattedStringForMultiPartRequestResponse:(id)arg1 compressed:(unsigned char)arg2 ;
-(id)formattedStringForRequestResponseMultipart:(id)arg1 partData:(id)arg2 className:(id)arg3 compressed:(unsigned char)arg4 ;
-(id)formattedStringForEnumType:(id)arg1 number:(id)arg2 ;
-(id)formattedStringForNumberType:(id)arg1 unsignedLongLong:(unsigned long long)arg2 ;
-(id)init;
@end

