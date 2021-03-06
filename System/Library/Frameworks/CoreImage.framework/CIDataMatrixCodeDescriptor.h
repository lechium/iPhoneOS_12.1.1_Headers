/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIDataMatrixCodeDescriptor : CIBarcodeDescriptor {

	NSData* errorCorrectedPayload;
	long long rowCount;
	long long columnCount;
	long long eccVersion;

}

@property (readonly) NSData * errorCorrectedPayload; 
@property (readonly) long long rowCount; 
@property (readonly) long long columnCount; 
@property (readonly) long long eccVersion; 
+(id)descriptorWithPayload:(id)arg1 rowCount:(long long)arg2 columnCount:(long long)arg3 eccVersion:(long long)arg4 ;
+(BOOL)supportsSecureCoding;
-(id)initWithPayload:(id)arg1 rowCount:(long long)arg2 columnCount:(long long)arg3 eccVersion:(long long)arg4 ;
-(long long)eccVersion;
-(NSData *)errorCorrectedPayload;
-(long long)columnCount;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)rowCount;
@end

