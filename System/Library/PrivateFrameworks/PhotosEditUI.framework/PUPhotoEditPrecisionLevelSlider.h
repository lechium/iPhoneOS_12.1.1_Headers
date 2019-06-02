/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosEditUI/PhotosEditUI-Structs.h>
#import <PhotosEditUI/PUPhotoEditLevelSlider.h>
#import <libobjc.A.dylib/PUPhotoEditPrecisionLevelContentViewDataSource.h>

@class PUPhotoEditPrecisionLevelContentView, NSString;

@interface PUPhotoEditPrecisionLevelSlider : PUPhotoEditLevelSlider <PUPhotoEditPrecisionLevelContentViewDataSource> {

	PUPhotoEditPrecisionLevelContentView* _precisionSliderContentView;

}

@property (assign,nonatomic) BOOL hideIdentityIndicator; 
@property (assign,nonatomic) unsigned long long mainTickMarkInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupWithLayoutOrientation:(long long)arg1 ;
-(id)preferredSliderContentView;
-(void)setHideIdentityIndicator:(BOOL)arg1 ;
-(unsigned long long)mainTickMarkInterval;
-(void)setMainTickMarkInterval:(unsigned long long)arg1 ;
-(void)invalidateConversionFactors;
-(BOOL)hideIdentityIndicator;
-(double)precisionLevelContentViewIdentityOffset:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end
