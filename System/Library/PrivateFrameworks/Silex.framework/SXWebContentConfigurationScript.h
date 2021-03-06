/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentScript.h>

@class WKUserScript, SXWebContentConfiguration, NSString;

@interface SXWebContentConfigurationScript : NSObject <SXWebContentScript> {

	WKUserScript* userScript;
	SXWebContentConfiguration* _configuration;

}

@property (nonatomic,copy,readonly) SXWebContentConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) WKUserScript * userScript; 
@property (nonatomic,readonly) NSString * executableScript; 
@property (nonatomic,readonly) BOOL queueable; 
-(WKUserScript *)userScript;
-(NSString *)executableScript;
-(BOOL)queueable;
-(NSString *)identifier;
-(SXWebContentConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
@end

