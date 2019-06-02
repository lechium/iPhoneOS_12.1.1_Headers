/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@class OSLogEventDecomposedMessage, NSObject;

@interface OSLogEventMessageArgument : NSObject {

	OSLogEventDecomposedMessage* _decomposedMessage;
	os_log_fmt_raw_placeholder* _rawArg;
	unsigned long long _sizeofLong;

}

@property (nonatomic,readonly) unsigned long long availability; 
@property (nonatomic,readonly) unsigned long long privacy; 
@property (nonatomic,readonly) unsigned long long category; 
@property (nonatomic,readonly) unsigned long long scalarCategory; 
@property (nonatomic,readonly) unsigned long long scalarType; 
@property (nonatomic,readonly) NSObject * objectRepresentation; 
@property (nonatomic,readonly) const void* rawBytes; 
@property (nonatomic,readonly) unsigned short rawBytesLength; 
@property (nonatomic,readonly) unsigned long long unsignedInt64Value; 
@property (nonatomic,readonly) long long int64Value; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,readonly) D longDoubleValue; 
-(const void*)rawBytes;
-(long long)int64Value;
-(unsigned long long)availability;
-(id)initWithProxy:(id)arg1 index:(unsigned long long)arg2 ;
-(unsigned long long)privacy;
-(unsigned short)rawBytesLength;
-(unsigned long long)scalarCategory;
-(unsigned long long)scalarType;
-(NSObject *)objectRepresentation;
-(unsigned long long)unsignedInt64Value;
-(D)longDoubleValue;
-(double)doubleValue;
-(unsigned long long)category;
@end

