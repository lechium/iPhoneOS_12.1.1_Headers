/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHAssetPropertySet.h>

@interface PHAssetPhotoIrisProperties : PHAssetPropertySet {

	unsigned short _photoIrisVisibilityState;
	SCD_Struct_PH1 _photoIrisStillDisplayTime;
	SCD_Struct_PH1 _photoIrisVideoDuration;

}

@property (nonatomic,readonly) SCD_Struct_PH1 photoIrisStillDisplayTime;              //@synthesize photoIrisStillDisplayTime=_photoIrisStillDisplayTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH1 photoIrisVideoDuration;                 //@synthesize photoIrisVideoDuration=_photoIrisVideoDuration - In the implementation block
@property (nonatomic,readonly) unsigned short photoIrisVisibilityState;               //@synthesize photoIrisVisibilityState=_photoIrisVisibilityState - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(SCD_Struct_PH1)photoIrisStillDisplayTime;
-(SCD_Struct_PH1)photoIrisVideoDuration;
-(unsigned short)photoIrisVisibilityState;
@end

