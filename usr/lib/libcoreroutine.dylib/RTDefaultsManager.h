/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>

@protocol RTUserDefaults;
@interface RTDefaultsManager : RTService {

	id<RTUserDefaults> _userDefaults;

}
-(void)addDomain:(id)arg1 ;
-(void)shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)initWithUserDefaults:(id)arg1 customDomain:(id)arg2 ;
-(void)notifyUpdatedKeys:(id)arg1 ;
-(void)registerDefault:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 domain:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 domain:(id)arg3 ;
-(id)init;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)registerDefaults:(id)arg1 ;
@end

