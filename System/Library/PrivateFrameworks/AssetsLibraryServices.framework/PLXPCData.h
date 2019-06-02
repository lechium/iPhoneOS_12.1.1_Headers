/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <CoreFoundation/NSData.h>

@protocol OS_xpc_object;
@class NSObject;

@interface PLXPCData : NSData {

	NSObject*<OS_xpc_object> _data;

}
-(id)initWithXPCData:(id)arg1 ;
-(unsigned long long)length;
-(void)dealloc;
-(id)debugDescription;
-(const void*)bytes;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
@end
