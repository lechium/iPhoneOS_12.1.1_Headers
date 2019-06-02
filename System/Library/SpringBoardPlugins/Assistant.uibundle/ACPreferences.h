/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFUIPreferencesDelegate.h>

@class AFUIPreferences, NSString;

@interface ACPreferences : NSObject <AFUIPreferencesDelegate> {

	AFUIPreferences* _internalPreferences;

}

@property (assign,nonatomic) BOOL siriDidActivate; 
@property (assign,nonatomic) BOOL tourGuideWasDisplayed; 
@property (assign,nonatomic) BOOL listenOnActivation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)preferences;
-(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)preferences:(id)arg1 didChangeValueForKey:(id)arg2 ;
-(BOOL)listenOnActivation;
-(BOOL)siriDidActivate;
-(void)setSiriDidActivate:(BOOL)arg1 ;
-(void)setListenOnActivation:(BOOL)arg1 ;
-(BOOL)tourGuideWasDisplayed;
-(void)setTourGuideWasDisplayed:(BOOL)arg1 ;
-(id)init;
-(BOOL)_boolForKey:(id)arg1 ;
@end

