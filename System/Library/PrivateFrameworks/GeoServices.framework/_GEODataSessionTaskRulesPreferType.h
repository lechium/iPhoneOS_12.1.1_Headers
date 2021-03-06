/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/_GEODataSessionTaskRulesHelper.h>

@interface _GEODataSessionTaskRulesPreferType : _GEODataSessionTaskRulesHelper {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(BOOL)dataTask:(id)arg1 shouldCreateSubtaskOfType:(unsigned long long)arg2 forRequest:(id)arg3 ;
-(void)dataTask:(id)arg1 didCompleteSubtask:(id)arg2 ;
-(BOOL)dataTask:(id)arg1 shouldStartSubtask:(id)arg2 ofType:(unsigned long long)arg3 ;
-(id)initForType:(unsigned long long)arg1 ;
-(unsigned long long)type;
@end

