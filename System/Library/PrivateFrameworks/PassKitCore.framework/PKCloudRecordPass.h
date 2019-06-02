/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKCloudRecordObject.h>

@class PKPass;

@interface PKCloudRecordPass : PKCloudRecordObject {

	PKPass* _pass;

}

@property (nonatomic,retain) PKPass * pass;              //@synthesize pass=_pass - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(id)_descriptionWithIncludeItem:(BOOL)arg1 ;
-(PKPass *)pass;
-(void)setPass:(PKPass *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)item;
-(long long)compare:(id)arg1 ;
@end

