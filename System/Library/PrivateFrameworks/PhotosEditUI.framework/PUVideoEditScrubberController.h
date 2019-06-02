/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosEditUI/PhotosEditUI-Structs.h>
#import <UIKit/UIMovieScrubberDataSource.h>
#import <UIKit/UIMovieScrubberDelegate.h>
#import <libobjc.A.dylib/PLSlalomRegionEditorDelegate.h>

@protocol PUVideoEditScrubberControllerDelegate;
@class PUVideoEditScrubberImageSource, UIMovieScrubber, UIView, PLSlalomRegionEditor, NSString;

@interface PUVideoEditScrubberController : NSObject <UIMovieScrubberDataSource, UIMovieScrubberDelegate, PLSlalomRegionEditorDelegate> {

	struct {
		BOOL respondsToDidBeginScrubbing;
		BOOL respondsToDidEndScrubbing;
		BOOL respondsToValueDidChange;
		BOOL respondsToStartDidChange;
		BOOL respondsToEndDidChange;
		BOOL respondsToDidBeginEditingSlomoRegions;
		BOOL respondsToDidEndEditingSlomoRegions;
		BOOL respondsToSlomoRegionsDidChangewithHandle;
	}  _delegateFlags;
	BOOL _showsSlomoRegionEditor;
	double _videoDuration;
	double _videoAspectRatio;
	PUVideoEditScrubberImageSource* _thumbnailSource;
	id<PUVideoEditScrubberControllerDelegate> _delegate;
	double _edgeInset;
	UIMovieScrubber* _movieScrubber;
	UIView* _scrubberView;
	PLSlalomRegionEditor* __slomoRegionEditor;

}

@property (setter=_setScrubberView:,nonatomic,retain) UIView * scrubberView;                                       //@synthesize scrubberView=_scrubberView - In the implementation block
@property (nonatomic,retain) UIMovieScrubber * movieScrubber;                                                      //@synthesize movieScrubber=_movieScrubber - In the implementation block
@property (setter=_setSlomoRegionEditor:,nonatomic,retain) PLSlalomRegionEditor * _slomoRegionEditor;              //@synthesize _slomoRegionEditor=__slomoRegionEditor - In the implementation block
@property (nonatomic,readonly) double videoDuration;                                                               //@synthesize videoDuration=_videoDuration - In the implementation block
@property (nonatomic,readonly) double videoAspectRatio;                                                            //@synthesize videoAspectRatio=_videoAspectRatio - In the implementation block
@property (nonatomic,readonly) BOOL isEditing; 
@property (nonatomic,retain) PUVideoEditScrubberImageSource * thumbnailSource;                                     //@synthesize thumbnailSource=_thumbnailSource - In the implementation block
@property (assign,nonatomic,__weak) id<PUVideoEditScrubberControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL thumbIsVisible; 
@property (assign,nonatomic) BOOL showsSlomoRegionEditor;                                                          //@synthesize showsSlomoRegionEditor=_showsSlomoRegionEditor - In the implementation block
@property (assign,nonatomic) double edgeInset;                                                                     //@synthesize edgeInset=_edgeInset - In the implementation block
@property (assign,nonatomic) double slomoEndTime; 
@property (assign,nonatomic) double slomoStartTime; 
@property (assign,nonatomic) double slomoMaxTime; 
@property (assign,nonatomic) double slomoMinTime; 
@property (assign,nonatomic) double trimEndTime; 
@property (assign,nonatomic) double trimStartTime; 
@property (assign,nonatomic) double currentTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentTime:(double)arg1 ;
-(void)setTrimStartTime:(double)arg1 ;
-(void)setTrimEndTime:(double)arg1 ;
-(double)trimEndTime;
-(double)trimStartTime;
-(double)videoDuration;
-(PLSlalomRegionEditor *)_slomoRegionEditor;
-(void)_setSlomoRegionEditor:(id)arg1 ;
-(void)setCurrentTime:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateSlomoRegionEditor;
-(void)_setScrubberView:(id)arg1 ;
-(BOOL)showsSlomoRegionEditor;
-(double)videoAspectRatio;
-(void)slalomRegionEditorDidBeginEditing:(id)arg1 withStartHandle:(BOOL)arg2 ;
-(void)slalomRegionEditorDidEndEditing:(id)arg1 ;
-(void)slalomRegionEditorStartValueChanged:(id)arg1 ;
-(void)slalomRegionEditorEndValueChanged:(id)arg1 ;
-(BOOL)slalomRegionEditorRequestForceZoom:(id)arg1 ;
-(void)slalomRegionEditorRequestForceUnzoom:(id)arg1 ;
-(id)initWithVideoDuration:(double)arg1 videoAspectRatio:(double)arg2 ;
-(double)slomoEndTime;
-(void)setSlomoEndTime:(double)arg1 ;
-(double)slomoStartTime;
-(void)setSlomoStartTime:(double)arg1 ;
-(double)slomoMaxTime;
-(void)setSlomoMaxTime:(double)arg1 ;
-(double)slomoMinTime;
-(void)setSlomoMinTime:(double)arg1 ;
-(void)setShowsSlomoRegionEditor:(BOOL)arg1 ;
-(UIMovieScrubber *)movieScrubber;
-(void)_createView;
-(PUVideoEditScrubberImageSource *)thumbnailSource;
-(void)setThumbnailSource:(PUVideoEditScrubberImageSource *)arg1 ;
-(void)setMovieScrubber:(UIMovieScrubber *)arg1 ;
-(UIView *)scrubberView;
-(void)dealloc;
-(void)setDelegate:(id<PUVideoEditScrubberControllerDelegate>)arg1 ;
-(id<PUVideoEditScrubberControllerDelegate>)delegate;
-(void)reloadData;
-(BOOL)isEditing;
-(void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(BOOL)arg3 ;
-(void)movieScrubber:(id)arg1 valueDidChange:(double)arg2 ;
-(void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2 ;
-(void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2 ;
-(void)movieScrubberDidFinishRequestingThumbnails:(id)arg1 ;
-(void)movieScrubberDidBeginEditing:(id)arg1 ;
-(void)movieScrubberDidBeginAnimatingZoom:(id)arg1 ;
-(void)movieScrubberDidEndAnimatingZoom:(id)arg1 ;
-(void)movieScrubber:(id)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3 ;
-(void)setEdgeInset:(double)arg1 ;
-(void)setThumbIsVisible:(BOOL)arg1 ;
-(double)movieScrubberDuration:(id)arg1 ;
-(void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2 ;
-(void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2 ;
-(id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4 ;
-(void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 ;
-(double)movieScrubberThumbnailAspectRatio:(id)arg1 ;
-(BOOL)thumbIsVisible;
-(double)edgeInset;
-(double)currentTime;
@end

