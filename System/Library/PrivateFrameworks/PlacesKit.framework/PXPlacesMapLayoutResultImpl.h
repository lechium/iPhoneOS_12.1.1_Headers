/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXPlacesMapLayoutResult.h>

@class NSOrderedSet, PXPlacesMapViewPort, NSMutableOrderedSet, NSString;

@interface PXPlacesMapLayoutResultImpl : NSObject <PXPlacesMapLayoutResult> {

	PXPlacesMapViewPort* _viewPort;
	NSMutableOrderedSet* _items;

}

@property (nonatomic,retain) NSMutableOrderedSet * items;                 //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) PXPlacesMapViewPort * viewPort;              //@synthesize viewPort=_viewPort - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSOrderedSet * layoutItems; 
-(NSOrderedSet *)layoutItems;
-(PXPlacesMapViewPort *)viewPort;
-(void)setViewPort:(PXPlacesMapViewPort *)arg1 ;
-(id)init;
-(NSString *)description;
-(NSMutableOrderedSet *)items;
-(void)setItems:(NSMutableOrderedSet *)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)addItems:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
@end

