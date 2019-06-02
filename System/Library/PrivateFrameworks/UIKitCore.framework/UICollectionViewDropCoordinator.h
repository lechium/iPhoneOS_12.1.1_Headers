/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSIndexPath, UICollectionViewDropProposal;


@protocol UICollectionViewDropCoordinator <NSObject>
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSIndexPath * destinationIndexPath; 
@property (nonatomic,readonly) UICollectionViewDropProposal * proposal; 
@property (nonatomic,readonly) id<UIDropSession> session; 
@required
-(NSArray *)items;
-(NSIndexPath *)destinationIndexPath;
-(id)dropItem:(id)arg1 toPlaceholder:(id)arg2;
-(id)dropItem:(id)arg1 toItemAtIndexPath:(id)arg2;
-(id)dropItem:(id)arg1 toTarget:(id)arg2;
-(UICollectionViewDropProposal *)proposal;
-(id<UIDropSession>)session;
-(id)dropItem:(id)arg1 intoItemAtIndexPath:(id)arg2 rect:(CGRect)arg3;

@end
