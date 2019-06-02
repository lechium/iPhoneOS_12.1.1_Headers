/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAAdjustment.h>

@class NSString, NSDictionary;

@interface IPAPhotoAdjustment : IPAAdjustment {

	BOOL _enabled;
	NSString* _maskUUID;
	NSDictionary* _autoSettings;

}

@property (assign,nonatomic) BOOL enabled;                             //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * maskUUID;                      //@synthesize maskUUID=_maskUUID - In the implementation block
@property (nonatomic,retain) NSDictionary * autoSettings;              //@synthesize autoSettings=_autoSettings - In the implementation block
-(NSDictionary *)autoSettings;
-(NSString *)maskUUID;
-(id)_debugDescriptionSuffix;
-(void)setMaskUUID:(NSString *)arg1 ;
-(void)setAutoSettings:(NSDictionary *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)enabled;
@end
