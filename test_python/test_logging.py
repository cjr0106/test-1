#/usr/bin/python
#encoding=gbk

import logging

def _init_log():
    # ����log����
    logger = logging.getLogger("test_logging")
    # ��־��ӡ�����̣�Ĭ�����ģʽΪ'a'(�ļ�ĩβ׷��д)
    # ����FileHandler����֧��SocketHandler, SMTPHandler��
    console=logging.StreamHandler()
    # ������־��ʽ
    formatter = logging.Formatter('%(asctime)s %(levelname)s %(message)s')
    console.setFormatter(formatter)
    logger.addHandler(console)
    logger.setLevel(logging.DEBUG)
    return logger

# ������ʹ��logger��ӡ��־
def run():
    logger = _init_log()
    logger.debug('debug info')
    logger.info("info message")
    print(__file__)
    print(__line__)

run()
