/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXPresentationAttributesObserver.h>
#import <libobjc.A.dylib/SXWebContentConfigurationProvider.h>

@protocol SXWebContentConfigurationProvider <NSObject>
@required
-(void)onChange:(/*^block*/id)arg1;
-(id)configurationForWidth:(double)arg1;

@end


@protocol SXPresentationAttributesProvider, SXStoreFrontProvider;
@class NSLocale, NSString;

@interface SXWebContentConfigurationProvider : NSObject <SXPresentationAttributesObserver, SXWebContentConfigurationProvider> {

	id<SXPresentationAttributesProvider> _presentationAttributesProvider;
	id<SXStoreFrontProvider> _storeFrontProvider;
	NSLocale* _locale;
	/*^block*/id _changeBlock;

}

@property (nonatomic,readonly) id<SXPresentationAttributesProvider> presentationAttributesProvider;              //@synthesize presentationAttributesProvider=_presentationAttributesProvider - In the implementation block
@property (nonatomic,readonly) id<SXStoreFrontProvider> storeFrontProvider;                                      //@synthesize storeFrontProvider=_storeFrontProvider - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                                                                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) id changeBlock;                                                                       //@synthesize changeBlock=_changeBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)changeBlock;
-(void)setChangeBlock:(id)arg1 ;
-(void)onChange:(/*^block*/id)arg1 ;
-(id<SXPresentationAttributesProvider>)presentationAttributesProvider;
-(id)configurationForWidth:(double)arg1 ;
-(void)presentationAttributesChangeFrom:(id)arg1 toAttributes:(id)arg2 ;
-(id)initWithPresentationAttributesProvider:(id)arg1 storeFrontProvider:(id)arg2 locale:(id)arg3 ;
-(id<SXStoreFrontProvider>)storeFrontProvider;
-(void)invokeChangeListener;
-(NSLocale *)locale;
@end

