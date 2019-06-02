/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosEditUI/PhotosEditUI-Structs.h>
@class PLEditSource;

@interface PUPhotoFilterThumbnailRenderer : NSObject {

	BOOL _allowDepthEffects;
	PLEditSource* _editSource;

}

@property (nonatomic,readonly) PLEditSource * editSource;              //@synthesize editSource=_editSource - In the implementation block
-(PLEditSource *)editSource;
-(id)initWithEditSource:(id)arg1 ;
-(void)requestThumbnailsForModel:(id)arg1 withFilters:(id)arg2 size:(CGSize)arg3 singleCompletion:(/*^block*/id)arg4 ;
@end
