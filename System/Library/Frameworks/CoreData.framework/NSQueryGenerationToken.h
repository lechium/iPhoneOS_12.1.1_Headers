/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSQueryGenerationToken : NSObject <NSCopying, NSSecureCoding>
+(id)currentQueryGenerationToken;
+(id)unpinnedQueryGenerationToken;
+(id)nostoresQueryGenerationToken;
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)_token;
-(id)_generationalComponentForStore:(id)arg1 ;
-(id)_storeIdentifier;
-(id)_storesForRequestRoutingFrom:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isUnmoored;
-(id)persistentStoreCoordinator;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

