//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "INewSyncPluginExt.h"

@class MyWCDB, WCDataItem;

@interface WCNotificationCenterMgr : MMObject <INewSyncPluginExt>
{
    WCDataItem *m_lastDataItem;
    MyWCDB *m_database;
    int m_unReadCount;
    id <WCNotificationCenterMgrDelegate> m_delegate;
}

@property(nonatomic) __weak id <WCNotificationCenterMgrDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MyWCDB *m_database; // @synthesize m_database;
- (void).cxx_destruct;
- (void)rptReceSnsRedDot:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)deleteAllMessages;
- (void)markMessageAllReadBeginWithMessage:(id)arg1;
- (void)markMessageListRead:(id)arg1;
- (void)markMessageRead:(id)arg1;
- (id)getMessageFrom:(id)arg1 maxCount:(unsigned int)arg2;
- (id)getAllMessages;
- (id)getUnReadMessagesLimit:(int)arg1;
- (id)getUnReadMessages;
- (id)getLatestReadMessage;
- (id)getLastUnReadMessage;
- (unsigned int)getUnReadMessageCount;
- (id)getLastWCObject;
- (void)NotifyCmd:(id)arg1;
- (void)NotifyCheckSelector;
- (void)saveSetting;
- (void)dealloc;
- (id)init;

@end
