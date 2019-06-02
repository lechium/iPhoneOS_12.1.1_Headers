/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TSNavigationBarSpinnerManager : NSObject {

	NSMutableDictionary* _navigationItems;
	NSMutableDictionary* _previousLeftBarButtonItems;
	NSMutableDictionary* _previousRightBarButtonItems;

}

@property (retain) NSMutableDictionary * navigationItems;                          //@synthesize navigationItems=_navigationItems - In the implementation block
@property (retain) NSMutableDictionary * previousLeftBarButtonItems;               //@synthesize previousLeftBarButtonItems=_previousLeftBarButtonItems - In the implementation block
@property (retain) NSMutableDictionary * previousRightBarButtonItems;              //@synthesize previousRightBarButtonItems=_previousRightBarButtonItems - In the implementation block
+(id)sharedManager;
-(void)startSpinnerInNavigationItem:(id)arg1 withIdentifier:(id)arg2 ;
-(void)stopSpinnerForIdentifier:(id)arg1 ;
-(void)setPreviousLeftBarButtonItems:(NSMutableDictionary *)arg1 ;
-(void)setPreviousRightBarButtonItems:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)previousLeftBarButtonItems;
-(NSMutableDictionary *)previousRightBarButtonItems;
-(void)stopSpinnerInNavigationItem:(id)arg1 withIdentifier:(id)arg2 ;
-(id)init;
-(NSMutableDictionary *)navigationItems;
-(void)setNavigationItems:(NSMutableDictionary *)arg1 ;
@end

