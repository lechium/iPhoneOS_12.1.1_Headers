/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface asn1Token : NSObject {

	unsigned char mClass;
	unsigned long long mIdentifier;
	unsigned long long mLength;
	const char* mContent;

}

@property (readonly) unsigned char tokenClass; 
@property (readonly) unsigned long long identifier; 
@property (readonly) unsigned long long length; 
@property (readonly) const char* content; 
+(id)readTokenFromBuffer:(const char*)arg1 opaque:(BOOL)arg2 ;
+(id)readTokenFromBuffer:(const char*)arg1 ;
+(id)readOpaqueTokenFromBuffer:(const char*)arg1 ;
-(id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char*)arg4 opaque:(BOOL)arg5 ;
-(unsigned char)tokenClass;
-(unsigned long long)length;
-(unsigned long long)identifier;
-(id)description;
-(const char*)content;
@end

