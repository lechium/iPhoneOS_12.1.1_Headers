/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKComplicationDisplay <NSObject>
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
@optional
-(BOOL)shouldUseTemplateColors;
-(void)setShouldUseTemplateColors:(BOOL)arg1;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1;
-(void)setEditing:(BOOL)arg1;
-(void)setMaxSize:(CGSize)arg1;

@required
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)setDisplayObserver:(id)arg1;
-(BOOL)canUseCurvedText;
-(void)setCanUseCurvedText:(BOOL)arg1;

@end

