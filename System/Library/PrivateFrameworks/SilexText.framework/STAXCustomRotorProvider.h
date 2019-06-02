/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSObject;

@interface STAXCustomRotorProvider : NSObject {

	NSSet* _cachedAvailableRotors;
	NSObject* _rootElement;

}

@property (assign,nonatomic,__weak) NSObject * rootElement;                     //@synthesize rootElement=_rootElement - In the implementation block
@property (nonatomic,copy,readonly) NSSet * cachedAvailableRotors;              //@synthesize cachedAvailableRotors=_cachedAvailableRotors - In the implementation block
-(NSObject *)rootElement;
-(id)initWithRootElement:(id)arg1 ;
-(void)setRootElement:(NSObject *)arg1 ;
-(id)graphSearchForAvailableCustomRotorsAndUpdateCache;
-(NSSet *)cachedAvailableRotors;
-(id)init;
@end
