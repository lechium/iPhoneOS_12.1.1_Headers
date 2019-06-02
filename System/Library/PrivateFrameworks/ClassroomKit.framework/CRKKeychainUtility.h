/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClassroomKit/ClassroomKit-Structs.h>
@interface CRKKeychainUtility : NSObject
+(void*)copyItemWithPersistentID:(id)arg1 ;
+(SecCertificateRef)copyCertificateWithPersistentID:(id)arg1 ;
+(SecIdentityRef)copyIdentityWithPersistentID:(id)arg1 ;
+(BOOL)removeItemWithPersistentID:(id)arg1 ;
+(BOOL)itemExistsInKeychain:(void*)arg1 ;
+(id)getCertificateExpirationDate:(SecCertificateRef)arg1 ;
+(id)getCertificateFingerprint:(SecCertificateRef)arg1 ;
+(id)getIdentityFingerprint:(SecIdentityRef)arg1 ;
+(SecCertificateRef)getLeafCertificateForTrust:(SecTrustRef)arg1 ;
+(id)getCommonNamesForCertificate:(SecCertificateRef)arg1 ;
+(id)baseQueryAttributes;
+(id)persistentIdFromPrivateKeyData:(id)arg1 certificateData:(id)arg2 ;
+(SecIdentityRef)identityFromPrivateKeyData:(id)arg1 certificateData:(id)arg2 ;
+(id)addItem:(void*)arg1 toGroup:(id)arg2 ;
+(id)getCertificatesWithPersistentIDs:(id)arg1 ;
+(SecKeyRef)privateKeyFromPersistentId:(id)arg1 ;
+(SecIdentityRef)createIdentityWithCommonName:(id)arg1 error:(id*)arg2 ;
+(id)getIdentityExpirationDate:(SecIdentityRef)arg1 ;
+(id)certificateExpirationDateFromPersistentId:(id)arg1 ;
+(BOOL)dateHasPassed:(id)arg1 ;
+(id)identityExpirationDateFromPersistentId:(id)arg1 ;
+(id)addPrivateKeyData:(id)arg1 certificateData:(id)arg2 toGroup:(id)arg3 ;
+(id)copyCertificatesWithPersistentIDs:(id)arg1 ;
+(SecCertificateRef)copyLeafCertificateForTrust:(SecTrustRef)arg1 ;
+(id)copyCommonNamesForCertificate:(SecCertificateRef)arg1 ;
+(id)getIdentityPublicCertificateData:(SecIdentityRef)arg1 ;
+(id)privateKeyDataFromPersistentId:(id)arg1 ;
+(id)certificateDataFromPersistentId:(id)arg1 ;
+(id)persistentIdFromCertificateData:(id)arg1 ;
+(id)addCertificateData:(id)arg1 toGroup:(id)arg2 ;
+(id)createIdentityPersistentIdFromCommonName:(id)arg1 groupName:(id)arg2 ;
+(BOOL)certificateExpiredWithPersistentId:(id)arg1 ;
+(BOOL)identityExpiredWithPersistentId:(id)arg1 ;
+(id)certificateCommonNamesFromPersistentID:(id)arg1 ;
@end

