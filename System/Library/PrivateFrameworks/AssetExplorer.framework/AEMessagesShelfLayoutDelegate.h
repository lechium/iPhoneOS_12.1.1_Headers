/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AEMessagesShelfLayoutDelegate <NSObject>
@required
-(double)layout:(id)arg1 aspectRatioForItemAtIndexPath:(PXSimpleIndexPath)arg2;
-(long long)layout:(id)arg1 irisToggleStateForItemAtIndexPath:(PXSimpleIndexPath)arg2;
-(BOOL)layout:(id)arg1 itemAtIndexPathIsVideo:(PXSimpleIndexPath)arg2;
-(BOOL)layout:(id)arg1 itemAtIndexPathIsLoop:(PXSimpleIndexPath)arg2;
-(double)layout:(id)arg1 itemAtIndexPathDuration:(PXSimpleIndexPath)arg2;
-(BOOL)layoutShouldShowVideoDuration:(id)arg1;

@end
