/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKFormFeature.h>

@class AKFormFeatureLine;

@interface AKFormFeatureBox : AKFormFeature {

	BOOL _widthExpands;
	BOOL _multiline;
	unsigned long long _flags;
	unsigned long long _alignment;
	AKFormFeatureLine* _baseline;
	CGRect _enclosingRegionRect;

}

@property (assign,nonatomic) unsigned long long flags;                       //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL widthExpands;                              //@synthesize widthExpands=_widthExpands - In the implementation block
@property (assign,getter=isMultiline,nonatomic) BOOL multiline;              //@synthesize multiline=_multiline - In the implementation block
@property (assign,nonatomic) unsigned long long alignment;                   //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,retain) AKFormFeatureLine * baseline;                   //@synthesize baseline=_baseline - In the implementation block
@property (assign,nonatomic) CGRect enclosingRegionRect;                     //@synthesize enclosingRegionRect=_enclosingRegionRect - In the implementation block
+(id)boxWithRect:(CGRect)arg1 onPage:(id)arg2 flags:(unsigned long long)arg3 baseline:(id)arg4 ;
-(unsigned long long)flags;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setEnclosingRegionRect:(CGRect)arg1 ;
-(CGRect)enclosingRegionRect;
-(id)initWithRect:(CGRect)arg1 onPage:(id)arg2 flags:(unsigned long long)arg3 baseline:(id)arg4 ;
-(BOOL)widthExpands;
-(void)setWidthExpands:(BOOL)arg1 ;
-(BOOL)isMultiline;
-(void)setMultiline:(BOOL)arg1 ;
-(AKFormFeatureLine *)baseline;
-(void)setBaseline:(AKFormFeatureLine *)arg1 ;
-(unsigned long long)alignment;
-(void)setAlignment:(unsigned long long)arg1 ;
@end

