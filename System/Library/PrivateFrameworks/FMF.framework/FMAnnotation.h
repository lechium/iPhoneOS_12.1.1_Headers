/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FMAccuracyOverlay, UIColor, UIImage, NSString;


@protocol FMAnnotation <NSObject>
@property (nonatomic,retain) FMAccuracyOverlay * overlay; 
@property (assign,nonatomic) double horizontalAccuracy; 
@property (assign,nonatomic) CLLocationCoordinate2D coordinate; 
@property (assign,nonatomic) double distanceFromUser; 
@property (assign,nonatomic) BOOL isBorderEnabled; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIImage * largeAnnotationIcon; 
@property (nonatomic,retain) UIImage * smallAnnotationIcon; 
@property (nonatomic,retain) UIImage * largeOverlayIcon; 
@property (nonatomic,retain) UIImage * smallOverlayIcon; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@optional
-(void)setCoordinate:(CLLocationCoordinate2D)arg1;
-(NSString *)title;
-(NSString *)subtitle;

@required
-(CLLocationCoordinate2D)coordinate;
-(void)setHorizontalAccuracy:(double)arg1;
-(double)horizontalAccuracy;
-(BOOL)hasKnownLocation;
-(BOOL)isThisDevice;
-(double)distanceFromUser;
-(void)setDistanceFromUser:(double)arg1;
-(BOOL)isBorderEnabled;
-(UIImage *)largeAnnotationIcon;
-(UIImage *)smallAnnotationIcon;
-(UIImage *)largeOverlayIcon;
-(void)setLargeOverlayIcon:(id)arg1;
-(UIImage *)smallOverlayIcon;
-(void)setSmallOverlayIcon:(id)arg1;
-(void)setIsBorderEnabled:(BOOL)arg1;
-(void)setSmallAnnotationIcon:(id)arg1;
-(void)setLargeAnnotationIcon:(id)arg1;
-(void)setTintColor:(id)arg1;
-(UIColor *)tintColor;
-(FMAccuracyOverlay *)overlay;
-(void)setOverlay:(id)arg1;

@end

