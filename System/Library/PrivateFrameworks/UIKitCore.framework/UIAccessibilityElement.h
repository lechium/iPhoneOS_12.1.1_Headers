/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIAccessibilityIdentification.h>

@class NSString;

@interface UIAccessibilityElement : NSObject <UIAccessibilityIdentification> {

	CGRect _accessibilityFrameInContainerSpace;

}

@property (assign,nonatomic,__weak) id accessibilityDelegate; 
@property (assign,nonatomic) CGRect bounds; 
@property (nonatomic,readonly) BOOL _accessibilityUsesFrameInContainerSpace; 
@property (assign,nonatomic) id accessibilityContainer; 
@property (assign,nonatomic) BOOL isAccessibilityElement; 
@property (nonatomic,retain) NSString * accessibilityLabel; 
@property (nonatomic,retain) NSString * accessibilityHint; 
@property (nonatomic,retain) NSString * accessibilityValue; 
@property (assign,nonatomic) CGRect accessibilityFrame; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
@property (assign,nonatomic) CGRect accessibilityFrameInContainerSpace;                   //@synthesize accessibilityFrameInContainerSpace=_accessibilityFrameInContainerSpace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * accessibilityIdentifier; 
-(BOOL)representsSubview;
-(BOOL)elementMatchesSubview:(id)arg1 ;
-(double)initialYOffset;
-(void)storeSubviewData:(id)arg1 ;
-(void)setTableCellYOffset:(float)arg1 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(void)setDelegate:(id)arg1 forAttribute:(long long)arg2 withSelector:(SEL)arg3 ;
-(void)delegateSpecificsForAttribute:(long long)arg1 delegate:(id*)arg2 selector:(SEL*)arg3 ;
-(id)dataForKey:(id)arg1 ;
-(id)accessibilityDelegate;
-(void)setAccessibilityDelegate:(id)arg1 ;
-(id)_accessibilityProxyView;
-(void)setTableCellYOffset:(float)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGRect)accessibilityFrame;
-(NSString *)accessibilityLabel;
-(NSString *)accessibilityValue;
-(NSString *)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(void)setAccessibilityHint:(NSString *)arg1 ;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(CGRect)accessibilityFrameInContainerSpace;
-(void)setAccessibilityFrameInContainerSpace:(CGRect)arg1 ;
@end

