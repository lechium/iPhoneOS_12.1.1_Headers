/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentSizer.h>
#import <libobjc.A.dylib/SXMosaicGalleryLayouterDataSource.h>

@class SXMosaicGalleryLayouter, NSString;

@interface SXMosaicGalleryComponentSizer : SXComponentSizer <SXMosaicGalleryLayouterDataSource> {

	SXMosaicGalleryLayouter* _layouter;

}

@property (nonatomic,retain) SXMosaicGalleryLayouter * layouter;              //@synthesize layouter=_layouter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)calculateHeightForWidth:(double)arg1 inColumnLayout:(id)arg2 ;
-(SXMosaicGalleryLayouter *)layouter;
-(void)setLayouter:(SXMosaicGalleryLayouter *)arg1 ;
-(unsigned long long)numberOfItemsForGalleryLayouter:(id)arg1 ;
-(CGSize)galleryLayouter:(id)arg1 dimensionsForItemAtIndex:(unsigned long long)arg2 ;
-(id)galleryLayouter:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 ;
-(BOOL)galleryLayouter:(id)arg1 viewIsCurrentlyFullscreenForItemAtIndex:(unsigned long long)arg2 ;
-(id)documentColumnLayoutForGalleryLayouter:(id)arg1 ;
@end
