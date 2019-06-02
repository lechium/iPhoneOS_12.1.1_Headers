/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class MCBook;

@interface MCManagedMediaPayload : MCPayload {

	MCBook* _managedBook;

}

@property (nonatomic,retain) MCBook * managedBook;              //@synthesize managedBook=_managedBook - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(void)setManagedBook:(MCBook *)arg1 ;
-(MCBook *)managedBook;
-(id)initWithManagedMedia:(id)arg1 profile:(id)arg2 ;
-(id)title;
@end

