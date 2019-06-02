/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIVisualEffectView, NSDictionary, NSArray;

@interface _UIVisualEffectNode : NSObject {

	NSMutableArray* _filterEntries;
	NSMutableArray* _viewEffects;
	NSMutableArray* _underlays;
	NSMutableArray* _overlays;
	BOOL _textShouldRenderWithTintColor;
	BOOL _disableInPlaceFiltering;
	UIVisualEffectView* _hostEffectView;
	NSDictionary* _options;

}

@property (assign,nonatomic,__weak) UIVisualEffectView * hostEffectView;              //@synthesize hostEffectView=_hostEffectView - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options;                           //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSArray * filterEntries;                                   //@synthesize filterEntries=_filterEntries - In the implementation block
@property (nonatomic,copy) NSArray * viewEffects;                                     //@synthesize viewEffects=_viewEffects - In the implementation block
@property (nonatomic,copy) NSArray * underlays;                                       //@synthesize underlays=_underlays - In the implementation block
@property (nonatomic,copy) NSArray * overlays;                                        //@synthesize overlays=_overlays - In the implementation block
@property (assign,nonatomic) BOOL textShouldRenderWithTintColor;                      //@synthesize textShouldRenderWithTintColor=_textShouldRenderWithTintColor - In the implementation block
@property (assign,nonatomic) BOOL disableInPlaceFiltering;                            //@synthesize disableInPlaceFiltering=_disableInPlaceFiltering - In the implementation block
+(id)newTransitionNodeForStops:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setDisableInPlaceFiltering:(BOOL)arg1 ;
-(void)addFilterEntry:(id)arg1 ;
-(NSDictionary *)options;
-(void)addViewEffect:(id)arg1 ;
-(void)setTextShouldRenderWithTintColor:(BOOL)arg1 ;
-(void)addUnderlay:(id)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(NSArray *)underlays;
-(NSArray *)filterEntries;
-(BOOL)textShouldRenderWithTintColor;
-(UIVisualEffectView *)hostEffectView;
-(void)setHostEffectView:(UIVisualEffectView *)arg1 ;
-(NSArray *)viewEffects;
-(NSArray *)overlays;
-(BOOL)disableInPlaceFiltering;
-(id)initWithOptions:(id)arg1 ;
-(void)setFilterEntries:(NSArray *)arg1 ;
-(void)setViewEffects:(NSArray *)arg1 ;
-(void)setUnderlays:(NSArray *)arg1 ;
-(void)setOverlays:(NSArray *)arg1 ;
-(id)copyForTransitionToNode:(id)arg1 ;
@end

