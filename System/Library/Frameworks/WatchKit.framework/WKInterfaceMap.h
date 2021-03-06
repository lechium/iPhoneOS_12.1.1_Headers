/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <WatchKit/WKInterfaceObject.h>

@interface WKInterfaceMap : WKInterfaceObject
-(void)setVisibleMapRect:(SCD_Struct_WK7)arg1 ;
-(void)removeAllAnnotations;
-(void)addAnnotation:(CLLocationCoordinate2D)arg1 withImage:(id)arg2 centerOffset:(CGPoint)arg3 ;
-(void)addAnnotation:(CLLocationCoordinate2D)arg1 withImageNamed:(id)arg2 centerOffset:(CGPoint)arg3 ;
-(void)addAnnotation:(CLLocationCoordinate2D)arg1 withPinColor:(long long)arg2 ;
-(void)setRegion:(SCD_Struct_WK8)arg1 ;
@end

