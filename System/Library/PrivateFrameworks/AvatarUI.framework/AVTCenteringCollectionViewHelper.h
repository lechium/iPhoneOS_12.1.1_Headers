/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AvatarUI/AvatarUI-Structs.h>
@interface AVTCenteringCollectionViewHelper : NSObject
+(CGPoint)contentOffsetForCenteringPoint:(CGPoint)arg1 collectionView:(id)arg2 ;
+(id)indexPathForNearestItemToCenterWithOffset:(CGPoint)arg1 collectionView:(id)arg2 ;
+(UIEdgeInsets)insetsForBounds:(CGRect)arg1 withFirstCellSize:(CGSize)arg2 lastCellSize:(CGSize)arg3 ;
+(id)indexPathForItemBeingScrolledTowardFromOffset:(CGPoint)arg1 currentOffset:(CGPoint)arg2 nearestItemToCenter:(id)arg3 itemCount:(unsigned long long)arg4 itemOffsetProvider:(/*^block*/id)arg5 ratio:(double*)arg6 ;
@end
