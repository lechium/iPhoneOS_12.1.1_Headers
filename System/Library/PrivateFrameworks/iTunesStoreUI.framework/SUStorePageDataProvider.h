/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISDataProvider.h>

@class SUClientInterface, ISPropertyListProvider;

@interface SUStorePageDataProvider : ISDataProvider {

	SUClientInterface* _clientInterface;
	long long _outputType;
	ISPropertyListProvider* _propertyListDataProvider;

}

@property (retain) SUClientInterface * clientInterface;                          //@synthesize clientInterface=_clientInterface - In the implementation block
@property (assign) long long outputType;                                         //@synthesize outputType=_outputType - In the implementation block
@property (copy) ISPropertyListProvider * propertyListDataProvider;              //@synthesize propertyListDataProvider=_propertyListDataProvider - In the implementation block
@property (readonly) BOOL shouldProcessTouchIDDialogs; 
-(ISPropertyListProvider *)propertyListDataProvider;
-(BOOL)shouldProcessTouchIDDialogs;
-(void)_loadPersonalizedStoreOffersForPage:(id)arg1 ;
-(void)setPropertyListDataProvider:(ISPropertyListProvider *)arg1 ;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(SUClientInterface *)clientInterface;
-(void)setOutputType:(long long)arg1 ;
-(long long)outputType;
@end

