/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GEOPhoneNumberResolutionResultSet : NSObject {

	NSMutableDictionary* _results;

}
-(id)initWithXPCDictionaryRepresentation:(id)arg1 ;
-(id)xpcDictionaryRepresentation;
-(void)setResult:(id)arg1 forPhoneNumber:(id)arg2 ;
-(void)setError:(id)arg1 forPhoneNumber:(id)arg2 ;
-(void)enumerateResolutionsUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)description;
@end

