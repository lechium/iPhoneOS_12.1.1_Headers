/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosEditUI/PhotosEditUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PUPhotoEditLayoutStaticAdaptable.h>

@class NSString;

@interface _PUSliderPlayheadBaseView : UIView <PUPhotoEditLayoutStaticAdaptable> {

	long long _layoutOrientation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long layoutOrientation;              //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
+(Class)layerClass;
-(void)setupWithLayoutOrientation:(long long)arg1 ;
-(void)_updateBaseShape;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(long long)layoutOrientation;
@end
