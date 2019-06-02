/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol REUIRelevanceEngineControllerDelegate <NSObject>
@optional
-(void)engineController:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)engineController:(id)arg1 isElementAtIndexPathVisible:(id)arg2;

@required
-(void)engineController:(id)arg1 didReloadContent:(id)arg2 atIndexPath:(id)arg3;
-(void)engineController:(id)arg1 didRemoveContent:(id)arg2 atIndexPath:(id)arg3;
-(void)engineController:(id)arg1 didInsertContent:(id)arg2 atIndexPath:(id)arg3;
-(void)engineController:(id)arg1 didMoveContent:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;

@end

