/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKCNavigationController.h>

@class _NTKCFaceDetailPhotoCropViewController, NTKCompanionCustomPhotosEditor, NTKFace, NTKDigitalTimeLabelStyle;

@interface NTKCFaceDetailPhotoCropViewController : NTKCNavigationController {

	_NTKCFaceDetailPhotoCropViewController* _implementationVC;

}

@property (nonatomic,readonly) unsigned long long index; 
@property (nonatomic,readonly) NTKCompanionCustomPhotosEditor * editor; 
@property (nonatomic,readonly) NTKFace * face; 
@property (nonatomic,readonly) NTKDigitalTimeLabelStyle * timeStyle; 
-(NTKFace *)face;
-(NTKCompanionCustomPhotosEditor *)editor;
-(id)initWithIndex:(unsigned long long)arg1 inPhotosEditor:(id)arg2 forFace:(id)arg3 timeStyle:(id)arg4 ;
-(NTKDigitalTimeLabelStyle *)timeStyle;
-(void)viewDidLoad;
-(unsigned long long)index;
@end

