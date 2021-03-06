/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKitUI/WatchListKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class WLKUISportsCellView;

@interface WLKUISportsCollectionViewCell : UICollectionViewCell {

	WLKUISportsCellView* _sportsCellView;

}

@property (nonatomic,retain) WLKUISportsCellView * sportsCellView;              //@synthesize sportsCellView=_sportsCellView - In the implementation block
+(id)sportsCardCellFromElement:(id)arg1 existingView:(id)arg2 ;
+(void)registerElements;
-(void)layoutWithElement:(id)arg1 ;
-(WLKUISportsCellView *)sportsCellView;
-(void)setSportsCellView:(WLKUISportsCellView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
@end

