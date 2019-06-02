/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPXRequestHandlingProxyCreating.h>

@class FPFileProviderService, FPXExtensionContext, NSString;

@interface FPXRequestHandlingProxyFactory : NSObject <FPXRequestHandlingProxyCreating> {

	FPFileProviderService* _service;
	FPXExtensionContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchProxyForItemIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithService:(id)arg1 context:(id)arg2 ;
@end

