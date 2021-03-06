/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKPlaceActivityProviderDelegate;
@class MKMapItem;

@interface MKPlaceActivityProvider : NSObject {

	id<MKPlaceActivityProviderDelegate> _delegate;
	MKMapItem* _mapItem;

}

@property (assign,nonatomic,__weak) id<MKPlaceActivityProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                              //@synthesize mapItem=_mapItem - In the implementation block
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(id)initWithMapItem:(id)arg1 ;
-(id)activityURL;
-(BOOL)shouldUseWebPlaceCardForActivityType:(id)arg1 ;
-(id)webPlaceCardURL;
-(id)activityAnnotationView;
-(void)setDelegate:(id<MKPlaceActivityProviderDelegate>)arg1 ;
-(id<MKPlaceActivityProviderDelegate>)delegate;
-(id)activityTitle;
@end

