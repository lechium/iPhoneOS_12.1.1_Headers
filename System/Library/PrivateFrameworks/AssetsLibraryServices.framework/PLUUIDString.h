/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <Foundation/NSString.h>

@interface PLUUIDString : NSString {

	unsigned char _uuid[16];
	char _uuidString[37];

}
+(id)UUIDString;
-(id)initWithCFUUID:(CFUUIDRef)arg1 ;
-(SCD_Struct_PL2)UUIDBytes;
-(id)UUIDData;
-(id)initWithUUIDData:(id)arg1 ;
-(id)initWithCFUUIDBytes:(SCD_Struct_PL2)arg1 ;
-(unsigned long long)length;
-(id)init;
-(BOOL)isEqualToString:(id)arg1 ;
-(const char*)UTF8String;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(id)initWithUUID:(unsigned char)arg1 ;
@end

