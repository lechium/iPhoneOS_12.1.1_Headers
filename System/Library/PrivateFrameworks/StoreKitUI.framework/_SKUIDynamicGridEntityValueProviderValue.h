/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKEntityValueProviding;
@interface _SKUIDynamicGridEntityValueProviderValue : NSObject {

	id<IKEntityValueProviding> _entityValueProvider;
	long long _sectionIndex;

}

@property (nonatomic,retain) id<IKEntityValueProviding> entityValueProvider;              //@synthesize entityValueProvider=_entityValueProvider - In the implementation block
@property (assign,nonatomic) long long sectionIndex;                                      //@synthesize sectionIndex=_sectionIndex - In the implementation block
-(void)setSectionIndex:(long long)arg1 ;
-(long long)sectionIndex;
-(void)setEntityValueProvider:(id<IKEntityValueProviding>)arg1 ;
-(id<IKEntityValueProviding>)entityValueProvider;
@end

