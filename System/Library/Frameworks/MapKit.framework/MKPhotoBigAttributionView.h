/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, _MKUILabel, UIView, MKMapItem;

@interface MKPhotoBigAttributionView : UIView {

	UIImageView* _imageView;
	_MKUILabel* _firstLineLabel;
	_MKUILabel* _secondLineLabel;
	UIView* _labelsView;
	UIView* _backgroundView;
	long long _type;
	MKMapItem* _mapItem;

}

@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;              //@synthesize mapItem=_mapItem - In the implementation block
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(void)updateInfoAttributionString;
-(void)setMapItem:(id)arg1 andType:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)updateBackground;
@end

