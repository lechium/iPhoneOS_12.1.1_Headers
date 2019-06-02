/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UIView.h>

@class TintedView, UIView, UIImage, StockGraphImageSet;

@interface VolumeGraphView : UIView {

	BOOL _showingTintedRegion;
	TintedView* _tintedVolumeView;
	UIView* _tintedRegionClipView;
	UIImage* _volumeImage;
	StockGraphImageSet* _graphImageSet;

}

@property (nonatomic,retain) StockGraphImageSet * graphImageSet;              //@synthesize graphImageSet=_graphImageSet - In the implementation block
-(void)resizeSelectedVolumeClipViewWithLeftX:(double)arg1 rightX:(double)arg2 ;
-(void)setShowingSelectedRegion:(BOOL)arg1 ;
-(void)setGraphImageSet:(StockGraphImageSet *)arg1 ;
-(StockGraphImageSet *)graphImageSet;
-(id)initWithFrame:(CGRect)arg1 ;
@end
