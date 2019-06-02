/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MiroMemoryEditorMenuViewControllerDelegate <NSObject>
@property (nonatomic,readonly) unsigned long long numberOfClipsInMovie; 
@property (nonatomic,readonly) double sequenceDuration; 
@required
-(void)prepareLayoutForCollapsedMode;
-(void)prepareLayoutForSpiltMode;
-(void)showTitleEditorViewController;
-(void)showMusicPickerViewController;
-(void)showContentEditorViewController;
-(void)showDurationEditorViewController;
-(void)showKeyAssetSelectionPicker;
-(void)showDebugTitleStylePickerViewController;
-(void)showDebugEditStylePickerViewController;
-(void)showDebugTransitionPickerViewController;
-(void)showDebugFilterPickerViewController;
-(unsigned long long)numberOfClipsInMovie;
-(double)sequenceDuration;

@end
