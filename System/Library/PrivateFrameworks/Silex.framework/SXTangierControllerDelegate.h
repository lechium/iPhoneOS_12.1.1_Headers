/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXTangierControllerDelegate <NSObject>
@optional
-(void)tangierControllerDidScroll:(id)arg1;
-(void)tangierControllerWillStartScrolling:(id)arg1;
-(void)tangierControllerDidStopScrolling:(id)arg1;
-(void)tangierController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4;
-(void)tangierController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
-(void)tangierController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(BOOL)arg3;

@end

